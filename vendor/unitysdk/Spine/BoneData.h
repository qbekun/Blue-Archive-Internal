#pragma once
#include "../unitysdk.h"

namespace Spine { class BoneData; }
namespace Spine { class Inherit; }

#define SPINE_BONEDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x95ABD60)
#define SPINE_BONEDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x95ABD70)
#define SPINE_BONEDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x95ABD80)
#define SPINE_BONEDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x95ABD90)
#define SPINE_BONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x95ABDA0)
#define SPINE_BONEDATA_GET_INHERIT_OFFSET UNITYSDK_OFFSET(0x95ABEB0)
#define SPINE_BONEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95ABEC0)
#define SPINE_BONEDATA_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x95ABED0)
#define SPINE_BONEDATA_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95ABEE0)
#define SPINE_BONEDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x95ABEF0)
#define SPINE_BONEDATA_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x95ABF00)
#define SPINE_BONEDATA_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x95ABF10)
#define SPINE_BONEDATA_SET_INHERIT_OFFSET UNITYSDK_OFFSET(0x95ABF20)
#define SPINE_BONEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95ABF30)
#define SPINE_BONEDATA_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x95ABF40)
#define SPINE_BONEDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x95ABF50)
#define SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x95ABF60)
#define SPINE_BONEDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x95ABF70)
#define SPINE_BONEDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x95ABF80)
#define SPINE_BONEDATA_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x95ABF90)
#define SPINE_BONEDATA_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x95ABFA0)
#define SPINE_BONEDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x95ABFB0)
#define SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x95ABFC0)
#define SPINE_BONEDATA_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x95ABFD0)
#define SPINE_BONEDATA_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x95ABFE0)

namespace Spine
{
	inline static constexpr unsigned int BoneData_TypeDefinitionIndex = 35030;

	class BoneData : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::System::String* name; // 0x18
		::Spine::BoneData* parent; // 0x20
		::System::Single length; // 0x28
		::System::Single x; // 0x2C
		::System::Single y; // 0x30
		::System::Single rotation; // 0x34
		::System::Single scaleX; // 0x38
		::System::Single scaleY; // 0x3C
		::System::Single shearX; // 0x40
		::System::Single shearY; // 0x44
		::Spine::Inherit* inherit; // 0x48
		::System::Boolean skinRequired; // 0x4C

		::System::Single get_Length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_Rotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_X(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::Spine::BoneData* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::Spine::BoneData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::Spine::Inherit* get_Inherit()
		{
			return (return (::Spine::Inherit*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_INHERIT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_ShearY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARY_OFFSET))(arg, nullptr);
		}

		::System::Single get_ScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEX_OFFSET))(nullptr);
		}

		::System::Void set_Y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Void set_Length(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_LENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScaleY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Inherit(::Spine::Inherit* arg)
		{
			((::System::Void(*)(::Spine::Inherit*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_INHERIT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Single get_ShearX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARX_OFFSET))(nullptr);
		}

		::Spine::BoneData* get_Parent()
		{
			return (return (::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Boolean get_SkinRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET))(nullptr);
		}

		::System::Single get_Rotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_ShearX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARX_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScaleX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_SkinRequired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Single get_ShearY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARY_OFFSET))(nullptr);
		}

		::System::Single get_ScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEY_OFFSET))(nullptr);
		}

	};
}

