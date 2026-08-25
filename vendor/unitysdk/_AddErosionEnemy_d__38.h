#pragma once
#include "unitysdk.h"

class ConquestTileVisual;
class ConquestTileMapVisual;
namespace MX::GameLogic::DBModel { class ConquestErosionDB; }
class <>c__DisplayClass38_0;

#define <ADDEROSIONENEMY>D__38_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D065D0)
#define <ADDEROSIONENEMY>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D065F0)
#define <ADDEROSIONENEMY>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D06600)
#define <ADDEROSIONENEMY>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D06890)
#define <ADDEROSIONENEMY>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D068A0)
#define <ADDEROSIONENEMY>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D068F0)

	inline static constexpr unsigned int <AddErosionEnemy>d__38_TypeDefinitionIndex = 1560;

	class <AddErosionEnemy>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestTileVisual* tileVisual; // 0x20
		ConquestTileMapVisual* __4__this; // 0x28
		::MX::GameLogic::DBModel::ConquestErosionDB* erosionDB; // 0x30
		Il2CppObject* onFinished; // 0x38
		<>c__DisplayClass38_0* __8__1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ADDEROSIONENEMY>D__38_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDEROSIONENEMY>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDEROSIONENEMY>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDEROSIONENEMY>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDEROSIONENEMY>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDEROSIONENEMY>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

