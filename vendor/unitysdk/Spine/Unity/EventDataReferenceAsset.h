#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine { class EventData; }
namespace Spine::Unity { class EventDataReferenceAsset; }

#define SPINE_UNITY_EVENTDATAREFERENCEASSET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95EA570)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EA720)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_GET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0x95EA730)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x95EA760)

namespace Spine::Unity
{
	inline static constexpr unsigned int EventDataReferenceAsset_TypeDefinitionIndex = 35274;

	class EventDataReferenceAsset : public Il2CppObject
	{
	public:
		::System::Boolean QuietSkeletonData; // 0x0
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18
		::System::String* eventName; // 0x20
		::Spine::EventData* eventData; // 0x28

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_.CTOR_OFFSET))(nullptr);
		}

		::Spine::EventData* get_EventData()
		{
			return (return (::Spine::EventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_GET_EVENTDATA_OFFSET))(nullptr);
		}

		::Spine::EventData* op_Implicit(::Spine::Unity::EventDataReferenceAsset* arg)
		{
			return (return (::Spine::EventData*(*)(::Spine::Unity::EventDataReferenceAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

