#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETMOVEDFROMATTRIBUTEDATAFORTYPE_OFFSET UNITYSDK_OFFSET(0xA243E00)
#define UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETOBSOLETETYPEREDIRECTION_OFFSET UNITYSDK_OFFSET(0xA243F70)

namespace UnityEngine::_Scripting::APIUpdating
{
	inline static constexpr unsigned int APIUpdaterRuntimeHelpers_TypeDefinitionIndex = 31224;

	class APIUpdaterRuntimeHelpers : public Il2CppObject
	{
	public:
		::System::Boolean GetMovedFromAttributeDataForType(::System::Type* arg, ::System::String&* arg, ::System::String&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String&*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETMOVEDFROMATTRIBUTEDATAFORTYPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetObsoleteTypeRedirection(::System::Type* arg, ::System::String&* arg, ::System::String&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String&*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE__SCRIPTING_APIUPDATING_APIUPDATERRUNTIMEHELPERS_GETOBSOLETETYPEREDIRECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

