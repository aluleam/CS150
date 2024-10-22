//
//  MHADONApp.swift
//  MHADON
//
//  Created by Making Aberto on 2/16/23.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        Text("Welcome!")
            .padding()
    }
}

class SceneDelegate: UIResponder, UIWindowSceneDelegate {
    var window: UIWindow?

    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {
        if let windowScene = scene as? UIWindowScene {
            let window = UIWindow(windowScene: windowScene)
            window.rootViewController = UIHostingController(rootView: ContentView())
            self.window = window
            window.makeKeyAndVisible()
        }
    }
}
