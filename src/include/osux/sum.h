#ifndef OSUX_SUM_H
#define OSUX_SUM_H

/*
 *  Copyright (©) 2015 Lucas Maugère, Thomas Mijieux
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include <glib.h>
#include <osux/heap.h>

G_BEGIN_DECLS

/*
  module for summing double.
  sets of functions are available for summing depending on
  -performance
  -accuracy
  -weighted
 */

#define MAX_NB_WEIGHTED 50

enum sum_type {
  DEFAULT, PERF, ACC, WEIGHT
};

struct sum;

struct sum * sum_new (unsigned int size, enum sum_type type);
void sum_add (struct sum * s, double x);
double sum_compute (struct sum * s);

G_END_DECLS

#endif // OSUX_SUM_H
