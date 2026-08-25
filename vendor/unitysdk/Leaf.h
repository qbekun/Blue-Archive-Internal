#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define LEAF_.CTOR_OFFSET UNITYSDK_OFFSET(0xD96440)
#define LEAF_CO_INVOKE_OFFSET UNITYSDK_OFFSET(0xD96450)
#define LEAF_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD96500)

	inline static constexpr unsigned int Leaf_TypeDefinitionIndex = 9755;

	class Leaf : public Il2CppObject
	{
	public:
		::System::Single Duration; // 0x20
		::System::Single Delay; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAF_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Invoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + LEAF_CO_INVOKE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAF_GETENUMERATOR_OFFSET))(nullptr);
		}

	};

