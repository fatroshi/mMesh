/*
MIT License

Copyright (c) 2020 Johan Svensson

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
 * MeshMessagePublisher.h
 *
 *  Created on: Feb 19, 2020
 *      Author: evsejho
 */

#ifndef SRC_MESH_MESHMESSAGEPUBLISHER_H_
#define SRC_MESH_MESHMESSAGEPUBLISHER_H_

namespace mesh {
class MeshMessageSubscriber;

class MeshMessagePublisher {
protected:
	MeshMessageSubscriber *sub; // only one for now.
public:
	void registerSubscriber(MeshMessageSubscriber *sub){ this->sub = sub; }
	void ungisterSubscriber(){sub = nullptr;}
	MeshMessagePublisher() : sub(nullptr) {}
	virtual ~MeshMessagePublisher() {}
};


} /* namespace mesh */

#endif /* SRC_MESH_MESHMESSAGEPUBLISHER_H_ */
