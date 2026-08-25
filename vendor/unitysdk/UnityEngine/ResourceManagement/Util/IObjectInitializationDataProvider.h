#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Util { class ObjectInitializationData; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IOBJECTINITIALIZATIONDATAPROVIDER_CREATEOBJECTINITIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IOBJECTINITIALIZATIONDATAPROVIDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int IObjectInitializationDataProvider_TypeDefinitionIndex = 36374;

	class IObjectInitializationDataProvider : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::Util::ObjectInitializationData* CreateObjectInitializationData()
		{
			return (return (::UnityEngine::ResourceManagement::Util::ObjectInitializationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IOBJECTINITIALIZATIONDATAPROVIDER_CREATEOBJECTINITIALIZATIONDATA_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_IOBJECTINITIALIZATIONDATAPROVIDER_GET_NAME_OFFSET))(nullptr);
		}

	};
}

