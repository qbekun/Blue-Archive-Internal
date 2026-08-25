#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class Motion; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_DATA_ROOTMOTIONFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC350)
#define MX_LOGIC_DATA_ROOTMOTIONFRAME_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11FC570)
#define MX_LOGIC_DATA_ROOTMOTIONFRAME_GET_POSITIONMAGNITUDEFORWARD_OFFSET UNITYSDK_OFFSET(0x11FC580)
#define MX_LOGIC_DATA_ROOTMOTIONFRAME_SET_POSITIONMAGNITUDEFORWARD_OFFSET UNITYSDK_OFFSET(0x11FC590)
#define MX_LOGIC_DATA_ROOTMOTIONFRAME_GETPOSITIONDELTAINFRAME_OFFSET UNITYSDK_OFFSET(0x11FC5A0)
#define MX_LOGIC_DATA_ROOTMOTIONFRAME_GET_POSITIONDELTAS_OFFSET UNITYSDK_OFFSET(0x11FC800)
#define MX_LOGIC_DATA_ROOTMOTIONFRAME_SET_POSITIONDELTAS_OFFSET UNITYSDK_OFFSET(0x11FC810)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int RootMotionFrame_TypeDefinitionIndex = 13731;

	class RootMotionFrame : public Il2CppObject
	{
	public:
		::System::Single _PositionMagnitudeForward_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _PositionDeltas_k__BackingField; // 0x18

		::System::Void .ctor(::FlatData::Motion* arg)
		{
			((::System::Void(*)(::FlatData::Motion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONFRAME_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Single get_PositionMagnitudeForward()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONFRAME_GET_POSITIONMAGNITUDEFORWARD_OFFSET))(nullptr);
		}

		::System::Void set_PositionMagnitudeForward(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONFRAME_SET_POSITIONMAGNITUDEFORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetPositionDeltaInFrame(::System::Single arg, ::System::Single arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONFRAME_GETPOSITIONDELTAINFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PositionDeltas()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONFRAME_GET_POSITIONDELTAS_OFFSET))(nullptr);
		}

		::System::Void set_PositionDeltas(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ROOTMOTIONFRAME_SET_POSITIONDELTAS_OFFSET))(arg, nullptr);
		}

	};
}

