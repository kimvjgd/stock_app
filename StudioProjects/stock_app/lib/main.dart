import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:stock_app/app/binding/init_binding.dart';
import 'package:stock_app/app/ui/components/dong_theme.dart';
import 'package:stock_app/app/ui/screens/index/index_screen.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return GetMaterialApp(
      title: 'Flutter Demo',
      debugShowCheckedModeBanner: false,
      theme: DongThemes.lightTheme,
      initialBinding: InitBinding(),
      home: HomePage(),
    );
  }
}

class HomePage extends StatelessWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return IndexScreen();
  }
}
