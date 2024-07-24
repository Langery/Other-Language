use actix::Actor;
use actix_web::{App, HttpResponse, HttpServer, get};//HttpRequest, web
use actix_web_actors::ws::{WebsocketContext};

// create a object
pub struct WsConn{
    pub nick: String
}

impl Actor for WsConn {
    type Context = WebsocketContext<Self>;

    // in
    fn started(&mut self, _: &mut Self::Context){
        println!("{} join!", self.nick);
    }
    // out
    fn stopped(&mut self, _: &mut Self::Context){
        println!("{} exit!", self.nick);
    }
}

// // Tip 2
// #[get("/ws")]
// async fn index(
//     req: HttpRequest,
//     stream: web::Payload
// ) -> HttpResponse {
//     let conn = WsConn {
//         nick: "Langery".into()
//     };
//     let resp = actix_web_actors::ws::start(conn, &req, stream);
//     match resp {
//         Ok(ret) => ret,
//         Err(e) => e.error_response(),
//     }
// }

// Tip 1
#[get("/ws")]
async fn index() -> HttpResponse {
    HttpResponse::Ok()
        .body("Hello World")
}

// create app
pub async fn create_app() {
    let (addr, port) = ("0.0.0.0", "8080");

    let _ = HttpServer::new(move || {
        App::new()
            .service(index)
    })
        .bind(format!("{}:{}", addr, port))
        .expect(&format!("Can't bind to port {}", port))
        .run()
        .await;
}

#[actix_web::main]
async fn main() {
    create_app().await;
}

