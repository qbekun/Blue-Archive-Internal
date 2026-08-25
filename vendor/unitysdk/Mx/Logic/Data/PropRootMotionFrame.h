#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PropMotion; }

#define MX_LOGIC_DATA_PROPROOTMOTIONFRAME_SET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1220260)
#define MX_LOGIC_DATA_PROPROOTMOTIONFRAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x1220270)
#define MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GETTRANSFORMOFFRAME_OFFSET UNITYSDK_OFFSET(0x1220520)
#define MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x12205D0)
#define MX_LOGIC_DATA_PROPROOTMOTIONFRAME_SET_ROTATIONS_OFFSET UNITYSDK_OFFSET(0x12205E0)
#define MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x12205F0)
#define MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GET_ROTATIONS_OFFSET UNITYSDK_OFFSET(0x1220600)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PropRootMotionFrame_TypeDefinitionIndex = 13739;

	class PropRootMotionFrame : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Positions_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Rotations_k__BackingField; // 0x18

		::System::Void set_Positions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONFRAME_SET_POSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::PropMotion* arg)
		{
			((::System::Void(*)(::FlatData::PropMotion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONFRAME_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void GetTransformOfFrame(::System::Single arg, ::UnityEngine::Vector3&* arg2, float&* arg3)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GETTRANSFORMOFFRAME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Positions()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GET_POSITIONS_OFFSET))(nullptr);
		}

		::System::Void set_Rotations(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONFRAME_SET_ROTATIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Rotations()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONFRAME_GET_ROTATIONS_OFFSET))(nullptr);
		}

	};
}

