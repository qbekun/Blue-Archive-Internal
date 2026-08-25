#pragma once
#include "unitysdk.h"

#define LAMBDASIGNATURE`1_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LAMBDASIGNATURE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int LambdaSignature`1_TypeDefinitionIndex = 33522;

	class LambdaSignature`1 : public Il2CppObject
	{
	public:
		Il2CppObject* s_instance; // 0x0
		Il2CppObject* Parameters; // 0x0
		::System::Linq::Expressions::LabelTarget* ReturnLabel; // 0x0

		Il2CppObject* get_Instance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMBDASIGNATURE`1_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMBDASIGNATURE`1_.CTOR_OFFSET))(nullptr);
		}

	};

