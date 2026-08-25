#pragma once
#include "unitysdk.h"

class DynamicUIContainerDirection;
namespace UnityEngine { class Vector3; }

#define DYNAMICUICONTAINERDIRECTIONEXTENSIONS_ISHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x218CAD0)
#define DYNAMICUICONTAINERDIRECTIONEXTENSIONS_ISPOSITIVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x218CAE0)
#define DYNAMICUICONTAINERDIRECTIONEXTENSIONS_GETDIRECTIONVECTOR_OFFSET UNITYSDK_OFFSET(0x218CAF0)

	inline static constexpr unsigned int DynamicUIContainerDirectionExtensions_TypeDefinitionIndex = 4093;

	class DynamicUIContainerDirectionExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsHorizontal(DynamicUIContainerDirection* arg)
		{
			return ((::System::Boolean(*)(DynamicUIContainerDirection*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINERDIRECTIONEXTENSIONS_ISHORIZONTAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPositiveDirection(DynamicUIContainerDirection* arg)
		{
			return ((::System::Boolean(*)(DynamicUIContainerDirection*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINERDIRECTIONEXTENSIONS_ISPOSITIVEDIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetDirectionVector(DynamicUIContainerDirection* arg)
		{
			return ((::UnityEngine::Vector3*(*)(DynamicUIContainerDirection*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINERDIRECTIONEXTENSIONS_GETDIRECTIONVECTOR_OFFSET))(arg, nullptr);
		}

	};

