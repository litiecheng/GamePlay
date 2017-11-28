#pragma once

#include "CommandBuffer.h"
#import <MetalKit/MetalKit.h>

namespace gameplay
{

/**
 * Metal impl of a CommandBuffer.
 */
class CommandBufferMTL : public CommandBuffer
{
public:

    /**
     * Constructor.
     */
	CommandBufferMTL();

    /**
     * Constructor.
     */
    CommandBufferMTL(id<MTLDevice> device, id<MTLCommandBuffer> commandBuffer);

    /**
	 * Destructor.
     */
    ~CommandBufferMTL();

	id<MTLDevice>  _device;
    id<MTLCommandBuffer> _commandBuffer;
};

}