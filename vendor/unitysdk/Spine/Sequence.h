#pragma once
#include "../unitysdk.h"

namespace Spine { class Sequence; }
namespace Spine { class Slot; }
namespace Spine { class IHasTextureRegion; }

#define SPINE_SEQUENCE_GET_START_OFFSET UNITYSDK_OFFSET(0x95A9320)
#define SPINE_SEQUENCE_SET_START_OFFSET UNITYSDK_OFFSET(0x95A9330)
#define SPINE_SEQUENCE_GET_DIGITS_OFFSET UNITYSDK_OFFSET(0x95A9340)
#define SPINE_SEQUENCE_SET_DIGITS_OFFSET UNITYSDK_OFFSET(0x95A9350)
#define SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x95A9360)
#define SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x95A9370)
#define SPINE_SEQUENCE_GET_REGIONS_OFFSET UNITYSDK_OFFSET(0x95A9380)
#define SPINE_SEQUENCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x95A9390)
#define SPINE_SEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A93A0)
#define SPINE_SEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A7010)
#define SPINE_SEQUENCE_APPLY_OFFSET UNITYSDK_OFFSET(0x95A7730)
#define SPINE_SEQUENCE_GETPATH_OFFSET UNITYSDK_OFFSET(0x95A5DC0)
#define SPINE_SEQUENCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95A9540)

namespace Spine
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 35025;

	class Sequence : public Il2CppObject
	{
	public:
		::System::Int32 nextID; // 0x0
		::System::Object* nextIdLock; // 0x8
		::System::Int32 id; // 0x10
		::Il2CppArray<::System::Object*>* regions; // 0x18
		::System::Int32 start; // 0x20
		::System::Int32 digits; // 0x24
		::System::Int32 setupIndex; // 0x28

		::System::Int32 get_Start()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_Start(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_START_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Digits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_DIGITS_OFFSET))(nullptr);
		}

		::System::Void set_Digits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_DIGITS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SetupIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SetupIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Regions()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_REGIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Spine::Sequence* arg)
		{
			((::System::Void(*)(::Spine::Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Spine::Slot* arg, ::Spine::IHasTextureRegion* arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::Spine::IHasTextureRegion*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPath(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GETPATH_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

