package com.example.Controlent;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/test")
public class FirstController {

    //ZAD1
    @GetMapping("/hello")
    public ResponseEntity<String> helloWorld() {
        return ResponseEntity.ok("Hello world");

    }

    //ZAD2
    @GetMapping("/model")
    public ResponseEntity<Car> model() {
        return ResponseEntity.ok(new Car("Honda"));
    }


    //ZAD3
    @GetMapping("/hello/{someValue}")
    public ResponseEntity<String> someValue() {
        return ResponseEntity.ok("{someValue}");
    }

    // ZAD4
    @GetMapping("/hello?reqParam={someValue}")
    public ResponseEntity<String> reqParamValue() {
        return ResponseEntity.ok("reqParamValue");
    }

    //ZAD5
    @PostMapping("/model")
    public ResponseEntity<Car> model1(@RequestBody Car rac) {
        return ResponseEntity.ok(rac);
    }
//wszystkie obiekty serializowane musza posiadac konstruktor bezargumentowy
//DO ZADANIA 5
    /*W POST, JSON, BODY,RAW
{
    "model": "wartosc"
}
     */
//encja ,,jakis obiekt, zwykly typu np car, profile"
}
