#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0xA273B40)
#define UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0xA273B90)

namespace UnityEngine
{
	inline static constexpr unsigned int ImageConversion_TypeDefinitionIndex = 38046;

	class ImageConversion : public Il2CppObject
	{
	public:
		::System::Boolean LoadImage(::UnityEngine::Texture2D* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean LoadImage(::UnityEngine::Texture2D* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture2D*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IMAGECONVERSION_LOADIMAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

