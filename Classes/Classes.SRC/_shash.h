
/*

Copyright © 2003-2013, Alexéy Sudachén, alexey@sudachen.name

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

namespace teggo {

  _TEGGO_EXPORTABLE u32_t Shash(char const *t,int len = -1);

#if defined _TEGGO_SPECIFIC_HERE || defined _TEGGOINLINE

#if defined _TEGGO_SPECIFIC_HERE
_TEGGO_EXPORTABLE
#else
CXX_FAKE_INLINE
#endif

  u32_t Shash(char const *t,int len)
    {
      byte_t const *p = (byte_t const*)t;
      u32_t h = 0;
      if ( len < 0 )
        for ( ;*p; ++p )
          h = ( h << 1 ) | *p;
      else
        while ( len-- > 0 )
          h = ( h << 1 ) | *p++;
      return h;
    }

#endif

} // namespace
