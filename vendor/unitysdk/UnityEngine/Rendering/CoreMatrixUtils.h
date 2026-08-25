#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYGENERICORTHOMATRIX_OFFSET UNITYSDK_OFFSET(0x9FD4D60)
#define UNITYENGINE_RENDERING_COREMATRIXUTILS_MATRIXTIMESTRANSLATION_OFFSET UNITYSDK_OFFSET(0x9FD55D0)
#define UNITYENGINE_RENDERING_COREMATRIXUTILS_TRANSLATIONTIMESMATRIX_OFFSET UNITYSDK_OFFSET(0x9FD5660)
#define UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYPERSPECTIVEMATRIX_OFFSET UNITYSDK_OFFSET(0x9FD5750)
#define UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYORTHOMATRIXCENTERED_OFFSET UNITYSDK_OFFSET(0x9FD5900)
#define UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x9FD5AA0)
#define UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYORTHOMATRIX_OFFSET UNITYSDK_OFFSET(0x9FD5C60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreMatrixUtils_TypeDefinitionIndex = 34055;

	class CoreMatrixUtils : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* MultiplyGenericOrthoMatrix(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYGENERICORTHOMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MatrixTimesTranslation(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREMATRIXUTILS_MATRIXTIMESTRANSLATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TranslationTimesMatrix(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREMATRIXUTILS_TRANSLATIONTIMESMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* MultiplyPerspectiveMatrix(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYPERSPECTIVEMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* MultiplyOrthoMatrixCentered(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYORTHOMATRIXCENTERED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* MultiplyProjectionMatrix(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYPROJECTIONMATRIX_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* MultiplyOrthoMatrix(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREMATRIXUTILS_MULTIPLYORTHOMATRIX_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

