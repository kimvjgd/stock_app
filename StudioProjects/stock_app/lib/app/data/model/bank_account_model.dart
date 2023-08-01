import 'package:stock_app/app/data/model/bank_model.dart';

class BankAccountModel {
  final BankModel bank;
  final String accountNumber;
  final String accountholderName;
  int balance; // 애는 계속 변할 값이니 final을 붙이지 않는다.
  final String? accountTypeName;

  BankAccountModel(
    this.bank,
    this.accountNumber,
    this.accountholderName,
    this.balance,
    {this.accountTypeName}
  );
}
