#pragma once
#include "unitysdk.h"

#define AUTODOLLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x284F390)

	inline static constexpr unsigned int AutoDolly_TypeDefinitionIndex = 34268;

	class AutoDolly : public Il2CppObject
	{
	public:
		::System::Boolean m_Enabled; // 0x10
		::System::Single m_PositionOffset; // 0x14
		::System::Int32 m_SearchRadius; // 0x18
		::System::Int32 m_SearchResolution; // 0x1C

		::System::Void .ctor(::System::Boolean arg, ::System::Single arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AUTODOLLY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

