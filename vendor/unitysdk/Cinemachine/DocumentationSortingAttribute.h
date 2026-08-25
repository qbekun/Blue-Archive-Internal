#pragma once
#include "../unitysdk.h"

#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285C8B0)
#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x285C8D0)
#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x285C8E0)

namespace Cinemachine
{
	inline static constexpr unsigned int DocumentationSortingAttribute_TypeDefinitionIndex = 34313;

	class DocumentationSortingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		Level* _Category_k__BackingField; // 0x10

		::System::Void .ctor(Level* arg)
		{
			((::System::Void(*)(Level*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Category(Level* arg)
		{
			((::System::Void(*)(Level*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		Level* get_Category()
		{
			return (return (Level*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_GET_CATEGORY_OFFSET))(nullptr);
		}

	};
}

