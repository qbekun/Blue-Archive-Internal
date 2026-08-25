#pragma once
#include "unitysdk.h"

namespace Nexon::Pub { class NXPatcherCommon; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace Nexon::Pub { class AssetBundleInformation; }

#define <GETASSETBUNDLE>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x954A830)
#define <GETASSETBUNDLE>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x954AA80)
#define <GETASSETBUNDLE>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x954AB50)
#define <GETASSETBUNDLE>D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x954B480)
#define <GETASSETBUNDLE>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x954B530)
#define <GETASSETBUNDLE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x954B540)
#define <GETASSETBUNDLE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x954B590)

	inline static constexpr unsigned int <GetAssetBundle>d__9_TypeDefinitionIndex = 37532;

	class <GetAssetBundle>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Nexon::Pub::NXPatcherCommon* __4__this; // 0x20
		::System::String* fileName; // 0x28
		::System::String* _filePath_5__2; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _request_5__3; // 0x38
		::System::Int64 _fileSize_5__4; // 0x40
		::Nexon::Pub::AssetBundleInformation* _assetBundleInformation_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETASSETBUNDLE>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETASSETBUNDLE>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETASSETBUNDLE>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETASSETBUNDLE>D__9___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETASSETBUNDLE>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETASSETBUNDLE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETASSETBUNDLE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

