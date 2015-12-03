/*
    This file is part of VK/KittenPHP-DB-Engine.

    VK/KittenPHP-DB-Engine is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    VK/KittenPHP-DB-Engine is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with VK/KittenPHP-DB-Engine.  If not, see <http://www.gnu.org/licenses/>.

    This program is released under the GPL with the additional exemption 
    that compiling, linking, and/or using OpenSSL is allowed.
    You are free to remove this exemption from derived works.

    Copyright 2012-2013 Vkontakte Ltd
              2012-2013 Arseny Smirnov
              2012-2013 Aliaksei Levin
*/

#include "token.h"
/*** Token ***/
Token::Token (TokenType type_)
  : type_ (type_), line_num(-1) {
}

Token::Token (TokenType type_, const string_ref &s)
  : type_ (type_), str_val (s), line_num(-1) {

}

Token::Token (TokenType type_, const char *s, const char *t)
  : type_ (type_), str_val (s, t), line_num(-1) {
}

string Token::to_str() {
  return debug_str;
}



