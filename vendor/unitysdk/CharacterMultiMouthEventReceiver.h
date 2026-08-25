#pragma once
#include "unitysdk.h"

#define CHARACTERMULTIMOUTHEVENTRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B6F70)
#define CHARACTERMULTIMOUTHEVENTRECEIVER_SETMOUTHTILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x10B6FD0)

	inline static constexpr unsigned int CharacterMultiMouthEventReceiver_TypeDefinitionIndex = 927;

	class CharacterMultiMouthEventReceiver : public Il2CppObject
	{
	public:
		Il2CppObject* mouthInfos; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMULTIMOUTHEVENTRECEIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMouthTileInternal(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMULTIMOUTHEVENTRECEIVER_SETMOUTHTILEINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

	};

