#pragma once
#include "unitysdk.h"

namespace Nexon::Pub { class AssetBundleInformation; }
namespace Nexon::Pub { class Error; }
namespace UnityEngine { class AssetBundle; }

#define GETASSETBUNDLERESULTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9549F80)
#define GETASSETBUNDLERESULTHANDLER_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x954AA20)
#define GETASSETBUNDLERESULTHANDLER_ONERROR_OFFSET UNITYSDK_OFFSET(0x954AA40)
#define GETASSETBUNDLERESULTHANDLER_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x954AA60)

	inline static constexpr unsigned int GetAssetBundleResultHandler_TypeDefinitionIndex = 37531;

	class GetAssetBundleResultHandler : public Il2CppObject
	{
	public:
		Il2CppObject* onProgressCallback; // 0x10
		Il2CppObject* onErrorCallback; // 0x18
		Il2CppObject* onCompleteCallback; // 0x20

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GETASSETBUNDLERESULTHANDLER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnProgress(::Nexon::Pub::AssetBundleInformation* arg)
		{
			((::System::Void(*)(::Nexon::Pub::AssetBundleInformation*, ::PVOID))((::PBYTE)hIl2Cpp + GETASSETBUNDLERESULTHANDLER_ONPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnError(::Nexon::Pub::Error* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + GETASSETBUNDLERESULTHANDLER_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void OnComplete(::UnityEngine::AssetBundle* arg)
		{
			((::System::Void(*)(::UnityEngine::AssetBundle*, ::PVOID))((::PBYTE)hIl2Cpp + GETASSETBUNDLERESULTHANDLER_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

	};

