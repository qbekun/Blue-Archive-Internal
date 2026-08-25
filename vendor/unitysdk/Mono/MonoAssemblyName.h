#pragma once
#include "../unitysdk.h"

namespace Mono
{
	inline static constexpr unsigned int MonoAssemblyName_TypeDefinitionIndex = 23583;

	class MonoAssemblyName : public Il2CppObject
	{
	public:
		::System::Int32 name; // 0x10
		::System::Int32 culture; // 0x18
		::System::Int32 hash_value; // 0x20
		::System::Int32 public_key; // 0x28
		<public_key_token>e__FixedBuffer* public_key_token; // 0x30
		::System::UInt32 hash_alg; // 0x44
		::System::UInt32 hash_len; // 0x48
		::System::UInt32 flags; // 0x4C
		::System::UInt16 major; // 0x50
		::System::UInt16 minor; // 0x52
		::System::UInt16 build; // 0x54
		::System::UInt16 revision; // 0x56
		::System::UInt16 arch; // 0x58

	};
}

