#pragma once
#include "unitysdk.h"

class UIPatchDownload;
class <>c__DisplayClass39_0;
class <>c__DisplayClass39_1;
namespace MX::AssetBundles { class PatchOption; }
namespace MX::Data { class LocalizeInBuildData; }
class QueuingGetAuthTicketNetworkTask;

#define <PATCHFORPROLOGUE>D__39_.CTOR_OFFSET UNITYSDK_OFFSET(0xC9A960)
#define <PATCHFORPROLOGUE>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9A980)
#define <PATCHFORPROLOGUE>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC9A990)
#define <PATCHFORPROLOGUE>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC45A0)
#define <PATCHFORPROLOGUE>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xCC45B0)
#define <PATCHFORPROLOGUE>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC4600)

	inline static constexpr unsigned int <PatchForPrologue>d__39_TypeDefinitionIndex = 9110;

	class <PatchForPrologue>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPatchDownload* __4__this; // 0x20
		<>c__DisplayClass39_0* __8__1; // 0x28
		<>c__DisplayClass39_1* __8__2; // 0x30
		::MX::AssetBundles::PatchOption* _patchOption_5__2; // 0x38
		::MX::Data::LocalizeInBuildData* _localizeInbuildData_5__3; // 0x40
		QueuingGetAuthTicketNetworkTask* _getKeyTask_5__4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PATCHFORPROLOGUE>D__39_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PATCHFORPROLOGUE>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PATCHFORPROLOGUE>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PATCHFORPROLOGUE>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PATCHFORPROLOGUE>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PATCHFORPROLOGUE>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

