#pragma once
#include "unitysdk.h"

#define PERSISTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2127A40)
#define PERSISTENT_BUILDINFOSETTING_OFFSET UNITYSDK_OFFSET(0x2127B00)
#define PERSISTENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2127BA0)
#define PERSISTENT_CLIENTVERSIONSETTING_OFFSET UNITYSDK_OFFSET(0x2127C70)
#define PERSISTENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2127D30)
#define PERSISTENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2127DA0)
#define PERSISTENT_GAMESTART_OFFSET UNITYSDK_OFFSET(0x21280B0)
#define PERSISTENT_FILTERLOG_OFFSET UNITYSDK_OFFSET(0x2127E30)
#define PERSISTENT_START_OFFSET UNITYSDK_OFFSET(0x2128140)

	inline static constexpr unsigned int Persistent_TypeDefinitionIndex = 3918;

	class Persistent : public Il2CppObject
	{
	public:
		::System::String* BuildVcsStreamName; // 0x0
		::System::String* BuildVcsRevisionNumber; // 0x8
		::System::String* BuildName; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BuildInfoSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_BUILDINFOSETTING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ClientVersionSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_CLIENTVERSIONSETTING_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GameStart()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_GAMESTART_OFFSET))(nullptr);
		}

		::System::Void FilterLog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_FILTERLOG_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Start()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENT_START_OFFSET))(nullptr);
		}

	};

