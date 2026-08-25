#pragma once
#include "unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterDynHeader; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterHuffmanTree; }

#define <CREATESTATEMACHINE>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0x90533A0)
#define <CREATESTATEMACHINE>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9053460)
#define <CREATESTATEMACHINE>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9053470)
#define <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.BOOLEAN_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9053FE0)
#define <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9053FF0)
#define <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9054040)
#define <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.BOOLEAN_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9054090)
#define <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9054130)

	inline static constexpr unsigned int <CreateStateMachine>d__7_TypeDefinitionIndex = 37124;

	class <CreateStateMachine>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Boolean __2__current; // 0x14
		::System::Int32 __l__initialThreadId; // 0x18
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* __4__this; // 0x20
		::System::Int32 _dataCodeCount_5__2; // 0x28
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* _metaCodeTree_5__3; // 0x30
		::System::Int32 _index_5__4; // 0x38
		::System::Int32 _i_5__5; // 0x3C
		::System::Byte _codeLength_5__6; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.IEnumerator_System.Boolean_.get_Current()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.BOOLEAN_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Boolean_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.BOOLEAN_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTATEMACHINE>D__7_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

