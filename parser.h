/*
 * parser.h
 *
 *  Created on: 14 ���� 2018
 *      Author: inbal
 */

#ifndef PARSER_H_
#define PARSER_H_

#define MAXCommand 256
#define INVALIDCOMMAND "Error: invalid command\n"
#define MARKERROR "Error: the value should be 0 or 1\n"


void parse (char str[MAXCommand]);

#endif /* PARSER_H_ */
