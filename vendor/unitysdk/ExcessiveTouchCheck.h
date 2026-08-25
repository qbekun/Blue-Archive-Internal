#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class LogicGameTime; }
namespace MX::Logic::Data { class ExcessiveTouch; }

#define EXCESSIVETOUCHCHECK_GET_EXCESSIVETOUCH_OFFSET UNITYSDK_OFFSET(0x10A8050)
#define EXCESSIVETOUCHCHECK_STARTCHECK_OFFSET UNITYSDK_OFFSET(0x10A8060)
#define EXCESSIVETOUCHCHECK_SET_EXCESSIVETOUCH_OFFSET UNITYSDK_OFFSET(0x10A81B0)
#define EXCESSIVETOUCHCHECK_COCHECK_OFFSET UNITYSDK_OFFSET(0x10A8140)
#define EXCESSIVETOUCHCHECK_STOPCHECK_OFFSET UNITYSDK_OFFSET(0x10A81F0)
#define EXCESSIVETOUCHCHECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10A8280)
#define EXCESSIVETOUCHCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x10A8420)

	inline static constexpr unsigned int ExcessiveTouchCheck_TypeDefinitionIndex = 872;

	class ExcessiveTouchCheck : public Il2CppObject
	{
	public:
		::System::Boolean initialized; // 0x18
		::MX::Logic::Battles::LogicGameTime* logicGameTime; // 0x20
		::System::Single checkExpireDuration; // 0x28
		::System::Int32 checkTouchCount; // 0x2C
		Il2CppObject* inputTimeList; // 0x30
		Il2CppObject* inputFrameList; // 0x38
		::MX::Logic::Data::ExcessiveTouch* _ExcessiveTouch_k__BackingField; // 0x40
		::MX::Logic::Data::ExcessiveTouch* excessiveTouch; // 0x50

		::MX::Logic::Data::ExcessiveTouch* get_ExcessiveTouch()
		{
			return ((::MX::Logic::Data::ExcessiveTouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCESSIVETOUCHCHECK_GET_EXCESSIVETOUCH_OFFSET))(nullptr);
		}

		::System::Void StartCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCESSIVETOUCHCHECK_STARTCHECK_OFFSET))(nullptr);
		}

		::System::Void set_ExcessiveTouch(::MX::Logic::Data::ExcessiveTouch* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::ExcessiveTouch*, ::PVOID))((::PBYTE)hIl2Cpp + EXCESSIVETOUCHCHECK_SET_EXCESSIVETOUCH_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCESSIVETOUCHCHECK_COCHECK_OFFSET))(nullptr);
		}

		::System::Void StopCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCESSIVETOUCHCHECK_STOPCHECK_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::LogicGameTime* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::LogicGameTime*, ::PVOID))((::PBYTE)hIl2Cpp + EXCESSIVETOUCHCHECK_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXCESSIVETOUCHCHECK_.CTOR_OFFSET))(nullptr);
		}

	};

