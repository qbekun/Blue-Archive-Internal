#pragma once
#include "../unitysdk.h"

namespace Spine { class BoneData; }
namespace Spine { class BlendMode; }

#define SPINE_SLOTDATA_GET_G_OFFSET UNITYSDK_OFFSET(0x95E0070)
#define SPINE_SLOTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E0080)
#define SPINE_SLOTDATA_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x95E01E0)
#define SPINE_SLOTDATA_SET_R2_OFFSET UNITYSDK_OFFSET(0x95E01F0)
#define SPINE_SLOTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95E0200)
#define SPINE_SLOTDATA_GET_B2_OFFSET UNITYSDK_OFFSET(0x95E0210)
#define SPINE_SLOTDATA_SET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x95E0220)
#define SPINE_SLOTDATA_SET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x95E0230)
#define SPINE_SLOTDATA_GET_R2_OFFSET UNITYSDK_OFFSET(0x95E0240)
#define SPINE_SLOTDATA_GET_A_OFFSET UNITYSDK_OFFSET(0x95E0250)
#define SPINE_SLOTDATA_GET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x95E0260)
#define SPINE_SLOTDATA_SET_A_OFFSET UNITYSDK_OFFSET(0x95E0270)
#define SPINE_SLOTDATA_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x95E0280)
#define SPINE_SLOTDATA_SET_B2_OFFSET UNITYSDK_OFFSET(0x95E0290)
#define SPINE_SLOTDATA_GET_G2_OFFSET UNITYSDK_OFFSET(0x95E02A0)
#define SPINE_SLOTDATA_GET_R_OFFSET UNITYSDK_OFFSET(0x95E02B0)
#define SPINE_SLOTDATA_SET_B_OFFSET UNITYSDK_OFFSET(0x95E02C0)
#define SPINE_SLOTDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x95E02D0)
#define SPINE_SLOTDATA_GET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x95E02E0)
#define SPINE_SLOTDATA_GET_B_OFFSET UNITYSDK_OFFSET(0x95E02F0)
#define SPINE_SLOTDATA_SET_G2_OFFSET UNITYSDK_OFFSET(0x95E0300)
#define SPINE_SLOTDATA_GET_BONEDATA_OFFSET UNITYSDK_OFFSET(0x95E0310)
#define SPINE_SLOTDATA_SET_R_OFFSET UNITYSDK_OFFSET(0x95E0320)
#define SPINE_SLOTDATA_SET_G_OFFSET UNITYSDK_OFFSET(0x95E0330)
#define SPINE_SLOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95E0340)

namespace Spine
{
	inline static constexpr unsigned int SlotData_TypeDefinitionIndex = 35071;

	class SlotData : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::System::String* name; // 0x18
		::Spine::BoneData* boneData; // 0x20
		::System::Single r; // 0x28
		::System::Single g; // 0x2C
		::System::Single b; // 0x30
		::System::Single a; // 0x34
		::System::Single r2; // 0x38
		::System::Single g2; // 0x3C
		::System::Single b2; // 0x40
		::System::Boolean hasSecondColor; // 0x44
		::System::String* attachmentName; // 0x48
		::Spine::BlendMode* blendMode; // 0x50

		::System::Single get_G()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_G_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::Spine::BoneData* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::Spine::BoneData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void set_BlendMode(::Spine::BlendMode* arg)
		{
			((::System::Void(*)(::Spine::BlendMode*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_BLENDMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_R2(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_R2_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Single get_B2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_B2_OFFSET))(nullptr);
		}

		::System::Void set_HasSecondColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_HASSECONDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttachmentName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_ATTACHMENTNAME_OFFSET))(str, nullptr);
		}

		::System::Single get_R2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_R2_OFFSET))(nullptr);
		}

		::System::Single get_A()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_A_OFFSET))(nullptr);
		}

		::System::String* get_AttachmentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_ATTACHMENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_A(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_A_OFFSET))(arg, nullptr);
		}

		::Spine::BlendMode* get_BlendMode()
		{
			return (return (::Spine::BlendMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_BLENDMODE_OFFSET))(nullptr);
		}

		::System::Void set_B2(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_B2_OFFSET))(arg, nullptr);
		}

		::System::Single get_G2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_G2_OFFSET))(nullptr);
		}

		::System::Single get_R()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_R_OFFSET))(nullptr);
		}

		::System::Void set_B(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_B_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_HasSecondColor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_HASSECONDCOLOR_OFFSET))(nullptr);
		}

		::System::Single get_B()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_B_OFFSET))(nullptr);
		}

		::System::Void set_G2(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_G2_OFFSET))(arg, nullptr);
		}

		::Spine::BoneData* get_BoneData()
		{
			return (return (::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_BONEDATA_OFFSET))(nullptr);
		}

		::System::Void set_R(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_R_OFFSET))(arg, nullptr);
		}

		::System::Void set_G(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_G_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_NAME_OFFSET))(nullptr);
		}

	};
}

