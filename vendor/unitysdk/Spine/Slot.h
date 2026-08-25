#pragma once
#include "../unitysdk.h"

namespace Spine { class SlotData; }
namespace Spine { class Bone; }
namespace Spine { class Attachment; }
namespace Spine { class Slot; }
namespace Spine { class Skeleton; }

#define SPINE_SLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DF800)
#define SPINE_SLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DFAB0)
#define SPINE_SLOT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95DFCB0)
#define SPINE_SLOT_GET_BONE_OFFSET UNITYSDK_OFFSET(0x95DFCC0)
#define SPINE_SLOT_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x95DFCD0)
#define SPINE_SLOT_GET_R_OFFSET UNITYSDK_OFFSET(0x95DFCF0)
#define SPINE_SLOT_SET_R_OFFSET UNITYSDK_OFFSET(0x95DFD00)
#define SPINE_SLOT_GET_G_OFFSET UNITYSDK_OFFSET(0x95DFD10)
#define SPINE_SLOT_SET_G_OFFSET UNITYSDK_OFFSET(0x95DFD20)
#define SPINE_SLOT_GET_B_OFFSET UNITYSDK_OFFSET(0x95DFD30)
#define SPINE_SLOT_SET_B_OFFSET UNITYSDK_OFFSET(0x95DFD40)
#define SPINE_SLOT_GET_A_OFFSET UNITYSDK_OFFSET(0x95DFD50)
#define SPINE_SLOT_SET_A_OFFSET UNITYSDK_OFFSET(0x95DFD60)
#define SPINE_SLOT_CLAMPCOLOR_OFFSET UNITYSDK_OFFSET(0x95DFD70)
#define SPINE_SLOT_GET_R2_OFFSET UNITYSDK_OFFSET(0x95DFE30)
#define SPINE_SLOT_SET_R2_OFFSET UNITYSDK_OFFSET(0x95DFE40)
#define SPINE_SLOT_GET_G2_OFFSET UNITYSDK_OFFSET(0x95DFE50)
#define SPINE_SLOT_SET_G2_OFFSET UNITYSDK_OFFSET(0x95DFE60)
#define SPINE_SLOT_GET_B2_OFFSET UNITYSDK_OFFSET(0x95DFE70)
#define SPINE_SLOT_SET_B2_OFFSET UNITYSDK_OFFSET(0x95DFE80)
#define SPINE_SLOT_GET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x95DFE90)
#define SPINE_SLOT_SET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x95DFEB0)
#define SPINE_SLOT_CLAMPSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x95DFED0)
#define SPINE_SLOT_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95DFF80)
#define SPINE_SLOT_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95DE100)
#define SPINE_SLOT_GET_SEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x95DFF90)
#define SPINE_SLOT_SET_SEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x95DFFA0)
#define SPINE_SLOT_GET_DEFORM_OFFSET UNITYSDK_OFFSET(0x95DFFB0)
#define SPINE_SLOT_SET_DEFORM_OFFSET UNITYSDK_OFFSET(0x95DFFC0)
#define SPINE_SLOT_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x95DF970)
#define SPINE_SLOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95E0050)

namespace Spine
{
	inline static constexpr unsigned int Slot_TypeDefinitionIndex = 35070;

	class Slot : public Il2CppObject
	{
	public:
		::Spine::SlotData* data; // 0x10
		::Spine::Bone* bone; // 0x18
		::System::Single r; // 0x20
		::System::Single g; // 0x24
		::System::Single b; // 0x28
		::System::Single a; // 0x2C
		::System::Single r2; // 0x30
		::System::Single g2; // 0x34
		::System::Single b2; // 0x38
		::System::Boolean hasSecondColor; // 0x3C
		::Spine::Attachment* attachment; // 0x40
		::System::Int32 sequenceIndex; // 0x48
		Il2CppObject* deform; // 0x50
		::System::Int32 attachmentState; // 0x58

		::System::Void .ctor(::Spine::SlotData* arg, ::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::SlotData*, ::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Spine::Slot* arg, ::Spine::Bone* arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Spine::SlotData* get_Data()
		{
			return (return (::Spine::SlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_DATA_OFFSET))(nullptr);
		}

		::Spine::Bone* get_Bone()
		{
			return (return (::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_BONE_OFFSET))(nullptr);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return (return (::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_SKELETON_OFFSET))(nullptr);
		}

		::System::Single get_R()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_R_OFFSET))(nullptr);
		}

		::System::Void set_R(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_R_OFFSET))(arg, nullptr);
		}

		::System::Single get_G()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_G_OFFSET))(nullptr);
		}

		::System::Void set_G(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_G_OFFSET))(arg, nullptr);
		}

		::System::Single get_B()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_B_OFFSET))(nullptr);
		}

		::System::Void set_B(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_B_OFFSET))(arg, nullptr);
		}

		::System::Single get_A()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_A_OFFSET))(nullptr);
		}

		::System::Void set_A(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_A_OFFSET))(arg, nullptr);
		}

		::System::Void ClampColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_CLAMPCOLOR_OFFSET))(nullptr);
		}

		::System::Single get_R2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_R2_OFFSET))(nullptr);
		}

		::System::Void set_R2(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_R2_OFFSET))(arg, nullptr);
		}

		::System::Single get_G2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_G2_OFFSET))(nullptr);
		}

		::System::Void set_G2(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_G2_OFFSET))(arg, nullptr);
		}

		::System::Single get_B2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_B2_OFFSET))(nullptr);
		}

		::System::Void set_B2(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_B2_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasSecondColor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_HASSECONDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_HasSecondColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_HASSECONDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void ClampSecondColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_CLAMPSECONDCOLOR_OFFSET))(nullptr);
		}

		::Spine::Attachment* get_Attachment()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_ATTACHMENT_OFFSET))(nullptr);
		}

		::System::Void set_Attachment(::Spine::Attachment* arg)
		{
			((::System::Void(*)(::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_ATTACHMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SequenceIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_SEQUENCEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SequenceIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_SEQUENCEINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Deform()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_DEFORM_OFFSET))(nullptr);
		}

		::System::Void set_Deform(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_DEFORM_OFFSET))(arg, nullptr);
		}

		::System::Void SetToSetupPose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SETTOSETUPPOSE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

