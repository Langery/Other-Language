use actix_web::{App, HttpResponse, HttpServer, get};

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

#[get("/ws")]
async fn index() -> HttpResponse {
    HttpResponse::Ok()
        .body("Hello World")
}

#[actix_web::main]
async fn main() {
    create_app().await;
}

