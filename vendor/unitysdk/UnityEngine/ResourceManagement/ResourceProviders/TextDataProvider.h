#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_CONVERT_OFFSET UNITYSDK_OFFSET(0xA0EDF50)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0xA0EDF60)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_SET_IGNOREFAILURES_OFFSET UNITYSDK_OFFSET(0xA0EE3F0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_GET_IGNOREFAILURES_OFFSET UNITYSDK_OFFSET(0xA0EE400)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EB3D0)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int TextDataProvider_TypeDefinitionIndex = 36417;

	class TextDataProvider : public Il2CppObject
	{
	public:
		::System::Boolean _IgnoreFailures_k__BackingField; // 0x20

		::System::Object* Convert(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_CONVERT_OFFSET))(arg, str, nullptr);
		}

		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IgnoreFailures(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_SET_IGNOREFAILURES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreFailures()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_GET_IGNOREFAILURES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_TEXTDATAPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

