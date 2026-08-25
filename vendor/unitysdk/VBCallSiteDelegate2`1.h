#pragma once
#include "unitysdk.h"

#define VBCALLSITEDELEGATE2`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define VBCALLSITEDELEGATE2`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int VBCallSiteDelegate2`1_TypeDefinitionIndex = 33511;

	class VBCallSiteDelegate2`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VBCALLSITEDELEGATE2`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke(Il2CppObject* arg, ::System::Object* arg, ::System::Object&* arg, ::System::Object&* arg)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::System::Object*, ::System::Object&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + VBCALLSITEDELEGATE2`1_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

