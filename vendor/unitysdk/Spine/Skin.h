#pragma once
#include "../unitysdk.h"

namespace Spine { class Skeleton; }
namespace Spine { class Skin; }
namespace Spine { class Attachment; }

#define SPINE_SKIN_ATTACHALL_OFFSET UNITYSDK_OFFSET(0x95DDD20)
#define SPINE_SKIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95DE1F0)
#define SPINE_SKIN_GET_ATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x95DE200)
#define SPINE_SKIN_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95DE050)
#define SPINE_SKIN_COPYSKIN_OFFSET UNITYSDK_OFFSET(0x95DE340)
#define SPINE_SKIN_CLEAR_OFFSET UNITYSDK_OFFSET(0x95DEAE0)
#define SPINE_SKIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DEB70)
#define SPINE_SKIN_REMOVEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95DED40)
#define SPINE_SKIN_GET_BONES_OFFSET UNITYSDK_OFFSET(0x95DEDD0)
#define SPINE_SKIN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95DEDE0)
#define SPINE_SKIN_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x95DEDF0)
#define SPINE_SKIN_GETATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x95DEE00)
#define SPINE_SKIN_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x95DE960)
#define SPINE_SKIN_ADDSKIN_OFFSET UNITYSDK_OFFSET(0x95DF1D0)

namespace Spine
{
	inline static constexpr unsigned int Skin_TypeDefinitionIndex = 35069;

	class Skin : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		Il2CppObject* attachments; // 0x18
		Il2CppObject* bones; // 0x20
		Il2CppObject* constraints; // 0x28

		::System::Void AttachAll(::Spine::Skeleton* arg, ::Spine::Skin* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::Spine::Skin*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_ATTACHALL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* get_Attachments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_ATTACHMENTS_OFFSET))(nullptr);
		}

		::Spine::Attachment* GetAttachment(::System::Int32 arg, ::System::String* str)
		{
			return (return (::Spine::Attachment*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GETATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void CopySkin(::Spine::Skin* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_COPYSKIN_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void RemoveAttachment(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_REMOVEATTACHMENT_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* get_Bones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_BONES_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_Constraints()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_CONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void GetAttachments(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GETATTACHMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAttachment(::System::Int32 arg, ::System::String* str, ::Spine::Attachment* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_SETATTACHMENT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void AddSkin(::Spine::Skin* arg)
		{
			((::System::Void(*)(::Spine::Skin*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_ADDSKIN_OFFSET))(arg, nullptr);
		}

	};
}

