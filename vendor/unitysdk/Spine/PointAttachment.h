#pragma once
#include "../unitysdk.h"

namespace Spine { class PointAttachment; }
namespace Spine { class Bone; }
namespace Spine { class Attachment; }

#define SPINE_POINTATTACHMENT_GET_X_OFFSET UNITYSDK_OFFSET(0x95A82E0)
#define SPINE_POINTATTACHMENT_SET_X_OFFSET UNITYSDK_OFFSET(0x95A82F0)
#define SPINE_POINTATTACHMENT_GET_Y_OFFSET UNITYSDK_OFFSET(0x95A8300)
#define SPINE_POINTATTACHMENT_SET_Y_OFFSET UNITYSDK_OFFSET(0x95A8310)
#define SPINE_POINTATTACHMENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x95A8320)
#define SPINE_POINTATTACHMENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x95A8330)
#define SPINE_POINTATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A5DB0)
#define SPINE_POINTATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A8340)
#define SPINE_POINTATTACHMENT_COMPUTEWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x95A83A0)
#define SPINE_POINTATTACHMENT_COMPUTEWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x95A8450)
#define SPINE_POINTATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x95A8670)

namespace Spine
{
	inline static constexpr unsigned int PointAttachment_TypeDefinitionIndex = 35023;

	class PointAttachment : public ::Antlr::Runtime::BitSet
	{
	public:
		::System::Single x; // 0x18
		::System::Single y; // 0x1C
		::System::Single rotation; // 0x20

		::System::Single get_X()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_X_OFFSET))(nullptr);
		}

		::System::Void set_X(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_X_OFFSET))(arg, nullptr);
		}

		::System::Single get_Y()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_Y_OFFSET))(nullptr);
		}

		::System::Void set_Y(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_Y_OFFSET))(arg, nullptr);
		}

		::System::Single get_Rotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_Rotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Spine::PointAttachment* arg)
		{
			((::System::Void(*)(::Spine::PointAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeWorldPosition(::Spine::Bone* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::Spine::Bone*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COMPUTEWORLDPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ComputeWorldRotation(::Spine::Bone* arg)
		{
			return (return (::System::Single(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COMPUTEWORLDROTATION_OFFSET))(arg, nullptr);
		}

		::Spine::Attachment* Copy()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COPY_OFFSET))(nullptr);
		}

	};
}

