#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define ENVELOPCONTENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F6500)
#define ENVELOPCONTENT_START_OFFSET UNITYSDK_OFFSET(0x9F6890)
#define ENVELOPCONTENT_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9F6510)
#define ENVELOPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F68A0)

	inline static constexpr unsigned int EnvelopContent_TypeDefinitionIndex = 11;

	class EnvelopContent : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* targetRoot; // 0x18
		::System::Int32 padLeft; // 0x20
		::System::Int32 padRight; // 0x24
		::System::Int32 padBottom; // 0x28
		::System::Int32 padTop; // 0x2C
		::System::Boolean ignoreDisabled; // 0x30
		::System::Boolean mStarted; // 0x31

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPCONTENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPCONTENT_START_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPCONTENT_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPCONTENT_.CTOR_OFFSET))(nullptr);
		}

	};

