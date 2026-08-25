#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGSYNCSCENETOSTREAMDATA_GET_RIGSTATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGSYNCSCENETOSTREAMDATA_GET_SYNCABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGSYNCSCENETOSTREAMDATA_GET_SYNCABLETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int IRigSyncSceneToStreamData_TypeDefinitionIndex = 37160;

	class IRigSyncSceneToStreamData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* get_rigStates()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGSYNCSCENETOSTREAMDATA_GET_RIGSTATES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_syncableProperties()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGSYNCSCENETOSTREAMDATA_GET_SYNCABLEPROPERTIES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_syncableTransforms()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGSYNCSCENETOSTREAMDATA_GET_SYNCABLETRANSFORMS_OFFSET))(nullptr);
		}

	};
}

