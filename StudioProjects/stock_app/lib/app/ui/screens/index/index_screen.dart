import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'package:stock_app/app/controller/bottom_nav_controller.dart';
import 'package:stock_app/app/ui/screens/home/home_screen.dart';
import 'package:stock_app/app/ui/screens/my/my_screen.dart';

class IndexScreen extends GetView<BottomNavController> {
  const IndexScreen({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Obx(() => IndexedStack(
              index: controller.pageIndex.value,
              children: [HomeScreen(), MyScreen()],
            )),
      ),
      bottomNavigationBar: BottomNavigationBar(
        onTap: (value) {
          controller.changeBottomNav(value);
        },
        items: [
          BottomNavigationBarItem(
              icon: ImageIcon(
                AssetImage("assets/images/icons/home_icon.png"),
              ),
              label: 'home'),
          BottomNavigationBarItem(
            icon: ImageIcon(
              AssetImage("assets/images/momo1.png"),
            ),
            label: 'my',
          ),
        ],
      ),
    );
  }
}
