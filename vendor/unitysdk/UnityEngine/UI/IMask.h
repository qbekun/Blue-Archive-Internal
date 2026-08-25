#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_IMASK_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UI_IMASK_ENABLED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IMask_TypeDefinitionIndex = 34781;

	class IMask : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* get_rectTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMASK_GET_RECTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMASK_ENABLED_OFFSET))(nullptr);
		}

	};
}

