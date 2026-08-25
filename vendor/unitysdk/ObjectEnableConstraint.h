#pragma once
#include "unitysdk.h"

#define OBJECTENABLECONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C1AC0)
#define OBJECTENABLECONSTRAINT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x20C1AD0)
#define OBJECTENABLECONSTRAINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20C1BB0)
#define OBJECTENABLECONSTRAINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20C1BE0)

	inline static constexpr unsigned int ObjectEnableConstraint_TypeDefinitionIndex = 3646;

	class ObjectEnableConstraint : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* syncObjects; // 0x18
		::Il2CppArray<::System::Object*>* inverseSyncObjects; // 0x20
		::System::Boolean forceSendMessage; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTENABLECONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetActive(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTENABLECONSTRAINT_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTENABLECONSTRAINT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTENABLECONSTRAINT_ONENABLE_OFFSET))(nullptr);
		}

	};

