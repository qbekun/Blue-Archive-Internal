#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ICurvesOwner_TypeDefinitionIndex = 36255;

	class ICurvesOwner : public Il2CppObject
	{
	public:
		::UnityEngine::Object* get_assetOwner()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TrackAsset* get_targetTrack()
		{
			return (return (::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET))(nullptr);
		}

		::System::String* get_defaultCurvesName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_asset()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSET_OFFSET))(nullptr);
		}

	};
}

