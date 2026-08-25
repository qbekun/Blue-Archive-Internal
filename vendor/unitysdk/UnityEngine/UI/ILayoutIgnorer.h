#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UI_ILAYOUTIGNORER_GET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ILayoutIgnorer_TypeDefinitionIndex = 34813;

	class ILayoutIgnorer : public Il2CppObject
	{
	public:
		::System::Boolean get_ignoreLayout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_ILAYOUTIGNORER_GET_IGNORELAYOUT_OFFSET))(nullptr);
		}

	};
}

