#pragma once
#include "unitysdk.h"

#define COMPILEDRESOURCEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x9F9A150)

	inline static constexpr unsigned int CompiledResourceInfo_TypeDefinitionIndex = 33839;

	class CompiledResourceInfo : public Il2CppObject
	{
	public:
		Il2CppObject* producers; // 0x10
		Il2CppObject* consumers; // 0x18
		::System::Int32 refCount; // 0x20
		::System::Boolean imported; // 0x24

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPILEDRESOURCEINFO_RESET_OFFSET))(nullptr);
		}

	};

