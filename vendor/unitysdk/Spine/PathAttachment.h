#pragma once
#include "../unitysdk.h"

namespace Spine { class PathAttachment; }
namespace Spine { class Attachment; }

#define SPINE_PATHATTACHMENT_GET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x95A8150)
#define SPINE_PATHATTACHMENT_SET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x95A8160)
#define SPINE_PATHATTACHMENT_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x95A8170)
#define SPINE_PATHATTACHMENT_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0x95A8180)
#define SPINE_PATHATTACHMENT_GET_CONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x95A8190)
#define SPINE_PATHATTACHMENT_SET_CONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x95A81A0)
#define SPINE_PATHATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A62B0)
#define SPINE_PATHATTACHMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A81B0)
#define SPINE_PATHATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x95A8280)

namespace Spine
{
	inline static constexpr unsigned int PathAttachment_TypeDefinitionIndex = 35022;

	class PathAttachment : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* lengths; // 0x40
		::System::Boolean closed; // 0x48
		::System::Boolean constantSpeed; // 0x49

		::Il2CppArray<::System::Object*>* get_Lengths()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_LENGTHS_OFFSET))(nullptr);
		}

		::System::Void set_Lengths(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_LENGTHS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Closed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_CLOSED_OFFSET))(nullptr);
		}

		::System::Void set_Closed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_CLOSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ConstantSpeed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_CONSTANTSPEED_OFFSET))(nullptr);
		}

		::System::Void set_ConstantSpeed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_CONSTANTSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Spine::PathAttachment* arg)
		{
			((::System::Void(*)(::Spine::PathAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::Attachment* Copy()
		{
			return (return (::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_COPY_OFFSET))(nullptr);
		}

	};
}

