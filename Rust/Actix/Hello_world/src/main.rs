use actix_web::{web, App, HttpServer, Responder, get};

struct AppState {
    app_name: String
}

#[get("/")]
async fn index_app(data: web::Data<AppState>) -> String {
    let app_name = &data.app_name;
    format!("Hello {app_name} ~")
}

async fn index() -> impl Responder {
    "Hello world~"
}

async fn demo() -> impl Responder {
    "This is demo."
}

#[actix_web::main]
async fn main() -> std::io::Result<()> {
    HttpServer::new(|| {
        App::new()
            .service(
                web::scope("/app")
                    .route("/index", web::get().to(index))
                    .route("/demo", web::get().to(demo))
            )
            // AppState
            .app_data(
                web::Data::new(AppState {
                    app_name: String::from("Actix Web")
                })
            )
            .service(index_app)
    })
    .bind(("127.0.0.1", 8080))?
    .run()
    .await
}