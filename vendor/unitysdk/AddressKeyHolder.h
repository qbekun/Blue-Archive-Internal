#pragma once
#include "unitysdk.h"

#define ADDRESSKEYHOLDER_RELEASE_OFFSET UNITYSDK_OFFSET(0x20F41D0)
#define ADDRESSKEYHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F43C0)
#define ADDRESSKEYHOLDER_ADD_OFFSET UNITYSDK_OFFSET(0x20F4440)

	inline static constexpr unsigned int AddressKeyHolder_TypeDefinitionIndex = 3834;

	class AddressKeyHolder : public Il2CppObject
	{
	public:
		Il2CppObject* keys; // 0x10

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDRESSKEYHOLDER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDRESSKEYHOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ADDRESSKEYHOLDER_ADD_OFFSET))(str, nullptr);
		}

	};

