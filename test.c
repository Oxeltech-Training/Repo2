include <stdint.h>

uint32_t counter = 0u;
for ( float32_t f = 0.0f; f < 1.0f; f += 0.001f )
{
++counter;
}

float32_t f;
for ( uint32_t counter = 0u; counter < 1000u; ++counter )
{
f = ( float32_t ) counter * 0.001f;
}