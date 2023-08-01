import 'package:get/get.dart';

enum PageName {Home, My}

class BottomNavController extends GetxController {
  RxInt pageIndex = 0.obs;

  void changeBottomNav(int value) {
    var page = PageName.values[value];
    switch(page) {
      case PageName.Home:
      case PageName.My:
        _changePage(value);
        break;
    }

  }
  void _changePage(int value) {
    pageIndex(value);
  }


}