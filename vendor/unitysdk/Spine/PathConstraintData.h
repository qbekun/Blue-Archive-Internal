#pragma once
#include "../unitysdk.h"

namespace Spine { class SlotData; }
namespace Spine { class PositionMode; }
namespace Spine { class SpacingMode; }
namespace Spine { class RotateMode; }

#define SPINE_PATHCONSTRAINTDATA_GET_ROTATEMIX_OFFSET UNITYSDK_OFFSET(0x95B2900)
#define SPINE_PATHCONSTRAINTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x95B2910)
#define SPINE_PATHCONSTRAINTDATA_SET_SPACINGMODE_OFFSET UNITYSDK_OFFSET(0x95B2920)
#define SPINE_PATHCONSTRAINTDATA_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x95B2930)
#define SPINE_PATHCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95B2940)
#define SPINE_PATHCONSTRAINTDATA_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x95B2950)
#define SPINE_PATHCONSTRAINTDATA_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x95B2960)
#define SPINE_PATHCONSTRAINTDATA_SET_ROTATEMODE_OFFSET UNITYSDK_OFFSET(0x95B2970)
#define SPINE_PATHCONSTRAINTDATA_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x95B2980)
#define SPINE_PATHCONSTRAINTDATA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x95B2990)
#define SPINE_PATHCONSTRAINTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x95B29A0)
#define SPINE_PATHCONSTRAINTDATA_GET_SPACINGMODE_OFFSET UNITYSDK_OFFSET(0x95B2A20)
#define SPINE_PATHCONSTRAINTDATA_GET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x95B2A30)
#define SPINE_PATHCONSTRAINTDATA_GET_ROTATEMODE_OFFSET UNITYSDK_OFFSET(0x95B2A40)
#define SPINE_PATHCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x95B2A50)
#define SPINE_PATHCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x95B2A60)
#define SPINE_PATHCONSTRAINTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x95B2A70)
#define SPINE_PATHCONSTRAINTDATA_SET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x95B2A80)
#define SPINE_PATHCONSTRAINTDATA_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x95B2A90)
#define SPINE_PATHCONSTRAINTDATA_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x95B2AA0)
#define SPINE_PATHCONSTRAINTDATA_SET_ROTATEMIX_OFFSET UNITYSDK_OFFSET(0x95B2AB0)
#define SPINE_PATHCONSTRAINTDATA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x95B2AC0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintData_TypeDefinitionIndex = 35047;

	class PathConstraintData : public Il2CppObject
	{
	public:
		Il2CppObject* bones; // 0x20
		::Spine::SlotData* target; // 0x28
		::Spine::PositionMode* positionMode; // 0x30
		::Spine::SpacingMode* spacingMode; // 0x34
		::Spine::RotateMode* rotateMode; // 0x38
		::System::Single offsetRotation; // 0x3C
		::System::Single position; // 0x40
		::System::Single spacing; // 0x44
		::System::Single mixRotate; // 0x48
		::System::Single mixX; // 0x4C
		::System::Single mixY; // 0x50

		::System::Single get_RotateMix()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_ROTATEMIX_OFFSET))(nullptr);
		}

		::System::Single get_Position()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_SpacingMode(::Spine::SpacingMode* arg)
		{
			((::System::Void(*)(::Spine::SpacingMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_SPACINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Spacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_SPACING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Bones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_BONES_OFFSET))(nullptr);
		}

		::System::Single get_MixX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_MIXX_OFFSET))(nullptr);
		}

		::System::Single get_MixY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_MIXY_OFFSET))(nullptr);
		}

		::System::Void set_RotateMode(::Spine::RotateMode* arg)
		{
			((::System::Void(*)(::Spine::RotateMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_ROTATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MixX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_MIXX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Target(::Spine::SlotData* arg)
		{
			((::System::Void(*)(::Spine::SlotData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::Spine::SpacingMode* get_SpacingMode()
		{
			return (return (::Spine::SpacingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_SPACINGMODE_OFFSET))(nullptr);
		}

		::Spine::PositionMode* get_PositionMode()
		{
			return (return (::Spine::PositionMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_POSITIONMODE_OFFSET))(nullptr);
		}

		::Spine::RotateMode* get_RotateMode()
		{
			return (return (::Spine::RotateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_ROTATEMODE_OFFSET))(nullptr);
		}

		::System::Single get_OffsetRotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET))(nullptr);
		}

		::System::Void set_OffsetRotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Position(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_PositionMode(::Spine::PositionMode* arg)
		{
			((::System::Void(*)(::Spine::PositionMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_POSITIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MixY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_MIXY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Spacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_SPACING_OFFSET))(nullptr);
		}

		::System::Void set_RotateMix(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_ROTATEMIX_OFFSET))(arg, nullptr);
		}

		::Spine::SlotData* get_Target()
		{
			return (return (::Spine::SlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_TARGET_OFFSET))(nullptr);
		}

	};
}

