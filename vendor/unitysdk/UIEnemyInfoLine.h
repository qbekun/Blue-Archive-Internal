#pragma once
#include "unitysdk.h"

#define UIENEMYINFOLINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F20B0)
#define UIENEMYINFOLINE_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F20F0)

	inline static constexpr unsigned int UIEnemyInfoLine_TypeDefinitionIndex = 5419;

	class UIEnemyInfoLine : public <GetNonFileStreamAsync>d__5
	{
	public:
		::Il2CppArray<::System::Object*>* Slots; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOLINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOLINE_SETDATA_OFFSET))(arg, nullptr);
		}

	};

